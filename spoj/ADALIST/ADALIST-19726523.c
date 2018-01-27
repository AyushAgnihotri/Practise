#include <cstdio>
#include <algorithm>
#include <vector>

using namespace std;

#define all(a) (a).begin(),(a).end()
#define pb push_back
#define sz(a) ((int)(a).size())
#define mp make_pair
#define fi first
#define se second

typedef pair<int,int> pint;
typedef long long ll;
typedef vector<int> vi;


struct node
{
	int prio,size,val;
	node *l,*r;
	node():l(0),r(0){}
} *root;
node pool[6*100005];

int size(node *n)
{
	return n?n->size:0;
}

void update(node *n)
{
	if (n)
		n->size=1+size(n->l)+size(n->r);
}

void split(node *n, node *&l, node *&r, int key, int add=0)
{
	if (!n)
		return void(l=r=0);
	int nkey=add+size(n->l)+1;
	if (nkey<key)
		split(n->r,n->r,r,key,nkey),l=n;
	else
		split(n->l,l,n->l,key,add),r=n;
	update(n);
}

void merge(node *l, node *r, node *&n)
{
	if (!l||!r)
		n=l?l:r;
	else if (l->prio>r->prio)
		merge(l->r,r,l->r),n=l;
	else
		merge(l,r->l,r->l),n=r;
	update(n);
}

void insert(int key, int val)
{
	static int ptr=0;
	node *x=&pool[ptr];
	ptr++;
	x->val=val;
	x->prio=rand();
	
	node *l,*r;
	split(root,l,r,key);
	merge(l,x,l);
	merge(l,r,root);
}

void remove(int key)
{
	node *l,*r;
	split(root,l,r,key);
	node *t;
	split(r,t,r,2);
	merge(l,r,root);
}

int get(int key, node *n=root, int add=0)
{
	if (!n)
		return -1;
	int nkey=add+size(n->l)+1;
	if (nkey==key)
		return n->val;
	if (key<nkey)
		return get(key,n->l,add);
	return get(key,n->r,nkey);
}

void print(node *n=root)
{
	if (!n)
		return;
	print(n->l);
	printf("%d ",n->val);
	print(n->r);
	if (n==root)
		printf("\n");
}

int main()
{
	int n,q,x;
	scanf("%d %d",&n,&q);
	for (int i=1; i<=n; i++)
	{
		scanf("%d",&x);
		insert(i,x);
	}
	int t,k;
	while (q--)
	{
		scanf("%d %d",&t,&k);
		if (t==1)
		{
			scanf("%d",&x);
			insert(k,x);
		}
		else if (t==2)
			remove(k);
		else
			printf("%d\n",get(k));
	}
	return 0;
}