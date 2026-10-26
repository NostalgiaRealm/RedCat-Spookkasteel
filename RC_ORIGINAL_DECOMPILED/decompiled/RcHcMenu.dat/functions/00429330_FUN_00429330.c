/*
 * FUN_00429330 at 00429330
 * undefined __register FUN_00429330(int * param_1, int param_2, char param_3)
 * Address ranges: 00429330-0042935c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00429330(int *param_1,int param_2,char param_3)

{
  FUN_00431ce8(param_1,param_2,param_3);
  if ((param_3 == '\x01') && (param_2 == param_1[0x4a])) {
    param_1[0x4a] = 0;
  }
  return;
}

