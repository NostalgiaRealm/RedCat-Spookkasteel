/*
 * FUN_00433b14 at 00433b14
 * undefined __register FUN_00433b14(int * param_1, int param_2)
 * Address ranges: 00433b14-00433b59
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00433b14(int *param_1,int param_2)

{
  FUN_004322e4(param_1,param_1);
  (**(code **)(*param_1 + -0x10))(param_1,param_2);
  if ((*(byte *)(param_1 + 0x10) & 2) != 0) {
    FUN_00432930(param_1,'\x01');
  }
  if ((*(byte *)(param_1 + 0x10) & 8) != 0) {
    *(ushort *)(param_1 + 0x11) = *(ushort *)(param_1 + 0x11) | 2;
  }
  FUN_00433ad0(param_1,param_2,0,0);
  return;
}

