/*
 * FUN_0045fc94 at 0045fc94
 * undefined __register FUN_0045fc94(int * param_1, char param_2)
 * Address ranges: 0045fc94-0045fcce
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0045fc94(int *param_1,char param_2)

{
  bool bVar1;
  
  bVar1 = FUN_0045fc38((int)param_1);
  if (bVar1 != (bool)param_2) {
    if (param_2 == '\0') {
      (**(code **)(*param_1 + 4))();
      *(byte *)(param_1 + 4) = *(byte *)(param_1 + 4) & 0xfb;
    }
    else {
      *(byte *)(param_1 + 4) = *(byte *)(param_1 + 4) | 4;
    }
  }
  return;
}

