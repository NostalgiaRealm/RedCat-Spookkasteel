/*
 * FUN_00457cb0 at 00457cb0
 * undefined __register FUN_00457cb0(int param_1)
 * Address ranges: 00457cb0-00457cd5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00457cb0(int param_1)

{
  while (*(int *)(param_1 + 0xc) != 0) {
    FUN_0045800c(param_1);
  }
  if (*(HGLOBAL *)(param_1 + 8) != (HGLOBAL)0x0) {
    FreeResource(*(HGLOBAL *)(param_1 + 8));
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}

