/*
 * FUN_00472948 at 00472948
 * undefined __register FUN_00472948(int * param_1)
 * Address ranges: 00472948-0047299d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00472948(int *param_1)

{
  if ((param_1[0x19] != 0) && (param_1[0x19] = param_1[0x19] + -1, param_1[0x19] == 0)) {
    if (*(char *)((int)param_1 + 0x8f) != *(char *)((int)param_1 + 0x8d)) {
      (**(code **)(*param_1 + 0xac))(param_1,6,0);
    }
    if ((*(char *)((int)param_1 + 0x8f) != '\0') && (*(char *)((int)param_1 + 0x8d) != '\0')) {
      (**(code **)(*param_1 + 0xac))(param_1,*(undefined1 *)((int)param_1 + 0x8e),0);
    }
  }
  return;
}

