int tot = 1;
for(int i=0;i<n;i++)
{
    tot *=2;
    tot%=(int)1e5;
}
tot--;
return tot%(int)1e5;