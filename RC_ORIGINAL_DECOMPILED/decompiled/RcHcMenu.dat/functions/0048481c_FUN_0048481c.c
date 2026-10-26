/*
 * FUN_0048481c at 0048481c
 * undefined __register FUN_0048481c(int * param_1)
 * Address ranges: 0048481c-0048485f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0048481c(int *param_1)

{
  uint uVar1;
  
  if (*(char *)((int)param_1 + 0x91) == '\0') {
    FUN_00473b1c(param_1);
    uVar1 = thunk_FUN_00479ca6(param_1[0x5a]);
    FUN_0047fe48(uVar1);
    uVar1 = thunk_FUN_00479c94(param_1[0x5a]);
    FUN_0047fe48(uVar1);
    FUN_00473148((int)param_1);
  }
  return;
}

