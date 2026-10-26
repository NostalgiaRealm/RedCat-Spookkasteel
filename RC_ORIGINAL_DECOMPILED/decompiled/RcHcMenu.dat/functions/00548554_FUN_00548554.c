/*
 * FUN_00548554 at 00548554
 * undefined4 __register FUN_00548554(int param_1, int param_2)
 * Address ranges: 00548554-00548597
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_00548554(int param_1,int param_2)

{
  undefined1 uVar1;
  int iVar2;
  undefined3 uVar3;
  
  iVar2 = FUN_0045ba40(*(int *)(param_1 + 0x20));
  if (((iVar2 < 1) || (*(int *)(param_2 + 4) != param_1)) ||
     (*(int *)(param_2 + 8) != *(int *)(param_1 + 0x24))) {
    uVar1 = 0;
    uVar3 = 0;
  }
  else {
    uVar3 = (undefined3)((uint)*(int *)(param_2 + 8) >> 8);
    uVar1 = 1;
  }
  return CONCAT31(uVar3,uVar1);
}

