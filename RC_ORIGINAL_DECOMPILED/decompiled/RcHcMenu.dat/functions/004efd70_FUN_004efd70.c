/*
 * FUN_004efd70 at 004efd70
 * undefined __register FUN_004efd70(int param_1)
 * Address ranges: 004efd70-004efdb2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004efd70(int param_1)

{
  if (((*(char *)(param_1 + 0x204) != '\0') || (*(char *)(param_1 + 0x205) == '\0')) &&
     (*(short *)(param_1 + 0x20a) != 0)) {
    (**(code **)(param_1 + 0x208))(*(undefined4 *)(param_1 + 0x20c),param_1);
  }
  return;
}

