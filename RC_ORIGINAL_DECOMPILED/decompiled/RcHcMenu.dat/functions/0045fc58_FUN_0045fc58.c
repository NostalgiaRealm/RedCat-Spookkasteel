/*
 * FUN_0045fc58 at 0045fc58
 * undefined __register FUN_0045fc58(undefined4 * param_1, char param_2)
 * Address ranges: 0045fc58-0045fc91
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0045fc58(undefined4 *param_1,char param_2)

{
  bool bVar1;
  
  bVar1 = FUN_0045fc18((int)param_1);
  if (bVar1 != (bool)param_2) {
    if (param_2 == '\0') {
      (**(code **)*param_1)();
      *(byte *)(param_1 + 4) = *(byte *)(param_1 + 4) & 0xfe;
    }
    else {
      *(byte *)(param_1 + 4) = *(byte *)(param_1 + 4) | 1;
    }
  }
  return;
}

