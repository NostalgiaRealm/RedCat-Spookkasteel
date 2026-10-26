/*
 * FUN_0042c9d4 at 0042c9d4
 * undefined __register FUN_0042c9d4(int param_1, int param_2, LPRECT param_3)
 * Address ranges: 0042c9d4-0042ca37
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0042c9d4(int param_1,int param_2,LPRECT param_3)

{
  int iVar1;
  
  iVar1 = (**(code **)(**(int **)(param_1 + 0x1f0) + 0x14))();
  if ((param_2 == 0) || (param_2 < iVar1)) {
    FUN_00433700(param_1,0x198,param_2,param_3);
  }
  else if (iVar1 == param_2) {
    FUN_00433700(param_1,0x198,param_2 + -1,param_3);
    OffsetRect(param_3,0,param_3->bottom - param_3->top);
  }
  else {
    FUN_00402cfc(&param_3->left,0x10,0);
  }
  return;
}

