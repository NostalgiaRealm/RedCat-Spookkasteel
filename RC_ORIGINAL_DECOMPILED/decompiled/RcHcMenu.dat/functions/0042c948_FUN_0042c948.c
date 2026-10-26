/*
 * FUN_0042c948 at 0042c948
 * int __register FUN_0042c948(int * param_1, POINT * param_2, char param_3)
 * Address ranges: 0042c948-0042c9d3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_0042c948(int *param_1,POINT *param_2,char param_3)

{
  POINT pt;
  POINT pt_00;
  BOOL BVar1;
  int iVar2;
  int iVar3;
  LONG LVar4;
  LONG LVar5;
  RECT RStack_30;
  RECT local_20;
  
  LVar4 = param_2->x;
  LVar5 = param_2->y;
  pt_00 = *param_2;
  (**(code **)(*param_1 + 0x40))(param_1,&local_20);
  pt.y = LVar5;
  pt.x = LVar4;
  BVar1 = PtInRect(&local_20,pt);
  if (BVar1 != 0) {
    iVar2 = FUN_0042c8dc(param_1);
    iVar3 = (**(code **)(*(int *)param_1[0x7c] + 0x14))();
    for (; iVar2 < iVar3; iVar2 = iVar2 + 1) {
      FUN_00433700((int)param_1,0x198,iVar2,&RStack_30);
      BVar1 = PtInRect(&RStack_30,pt_00);
      if (BVar1 != 0) {
        return iVar2;
      }
    }
    if (param_3 == '\0') {
      return iVar2;
    }
  }
  return -1;
}

