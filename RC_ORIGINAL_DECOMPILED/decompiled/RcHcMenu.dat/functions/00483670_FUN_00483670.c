/*
 * FUN_00483670 at 00483670
 * bool __register FUN_00483670(int * param_1)
 * Address ranges: 00483670-00483696
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_00483670(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_00480b80(param_1[0x1e],(undefined *)param_1[0x22]);
  FUN_00483aa4(param_1,iVar1);
  *(undefined1 *)((int)param_1 + 0x67) = 0;
  return param_1[0x1c] != 0;
}

