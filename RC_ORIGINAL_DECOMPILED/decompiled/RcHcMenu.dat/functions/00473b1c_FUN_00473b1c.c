/*
 * FUN_00473b1c at 00473b1c
 * undefined __register FUN_00473b1c(int * param_1)
 * Address ranges: 00473b1c-00473b7d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00473b1c(int *param_1)

{
  byte bVar1;
  
  (**(code **)(*param_1 + 0x84))();
  (**(code **)(*param_1 + 0xac))(param_1,7,0);
  bVar1 = *(char *)((int)param_1 + 0x8d) - 2;
  if (bVar1 < 2) {
    FUN_004729a0(param_1);
    if (*(char *)((int)param_1 + 0x92) == '\0') {
      (**(code **)(*param_1 + 0x208))();
      return;
    }
    (**(code **)(*param_1 + 0x240))();
  }
  else if (bVar1 == 2) {
    (**(code **)(*param_1 + 0x240))();
  }
  return;
}

