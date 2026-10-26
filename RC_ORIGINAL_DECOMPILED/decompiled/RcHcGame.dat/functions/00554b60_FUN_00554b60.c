/*
 * FUN_00554b60 at 00554b60
 * undefined FUN_00554b60(void)
 * Address ranges: 00554b60-00554c1e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool __thiscall FUN_00554b60(int param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined1 local_10 [8];
  undefined4 local_8;
  
  iVar1 = param_3;
  while ((uVar2 = param_4, *(int *)(iVar1 + 4) != 0 &&
         (0 < (int)(*(int *)(iVar1 + 8) - *(int *)(iVar1 + 4) & 0xfffffffcU)))) {
    FUN_00555200(0);
  }
  while( true ) {
    uVar3 = FUN_00554660(param_2,param_1 + 4,param_1 + 0x10,4,uVar2,&LAB_00554dd0,iVar1,local_10);
    iVar4 = FUN_005b7dc0(uVar3);
    if (iVar4 == 0) break;
    param_3 = FUN_00554c20(local_8);
    FUN_0053cff0(*(undefined4 *)(iVar1 + 8),1,&param_3);
  }
  if (*(int *)(iVar1 + 4) == 0) {
    return false;
  }
  return 0 < *(int *)(iVar1 + 8) - *(int *)(iVar1 + 4) >> 2;
}

