/*
 * FUN_00468618 at 00468618
 * undefined __register FUN_00468618(int param_1)
 * Address ranges: 00468618-0046864a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00468618(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 8);
  if ((piVar1 != (int *)0x0) && ((*(byte *)(piVar1 + 8) & 8) == 0)) {
    (**(code **)(*piVar1 + 0xac))(piVar1,9,0);
  }
  if (*(short *)(param_1 + 0x12) != 0) {
    (**(code **)(param_1 + 0x10))(*(undefined4 *)(param_1 + 0x14),param_1);
  }
  return;
}

