/*
 * FUN_00543a50 at 00543a50
 * undefined __register FUN_00543a50(int * param_1, int param_2)
 * Address ranges: 00543a50-00543a85
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00543a50(int *param_1,int param_2)

{
  FUN_005418e0(param_1,'\0');
  FUN_004f1924((undefined4 *)param_1[0xa9],param_2);
  (**(code **)(*param_1 + 0xf0))();
  return;
}

