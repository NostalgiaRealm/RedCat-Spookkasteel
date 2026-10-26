/*
 * FUN_0042a9ec at 0042a9ec
 * undefined __register FUN_0042a9ec(int param_1, char param_2)
 * Address ranges: 0042a9ec-0042aa24
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0042a9ec(int param_1,char param_2)

{
  if (param_2 != *(char *)(param_1 + 0x1fa)) {
    *(char *)(param_1 + 0x1fa) = param_2;
    if (param_2 == '\x01') {
      *(uint *)(param_1 + 0x40) = *(uint *)(param_1 + 0x40) & 0xfffffdff;
    }
    else {
      *(uint *)(param_1 + 0x40) = *(uint *)(param_1 + 0x40) | 0x200;
    }
    FUN_00435de4(param_1);
  }
  return;
}

