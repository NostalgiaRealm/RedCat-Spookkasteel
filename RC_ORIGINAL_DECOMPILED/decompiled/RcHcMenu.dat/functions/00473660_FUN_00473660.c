/*
 * FUN_00473660 at 00473660
 * char __register FUN_00473660(int * param_1)
 * Address ranges: 00473660-004736e2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char FUN_00473660(int *param_1)

{
  char cVar1;
  uint extraout_EDX;
  
  FUN_004729a0(param_1);
  cVar1 = *(char *)((int)param_1 + 0x8d) + -4;
  if ((byte)(*(char *)((int)param_1 + 0x8d) - 2U) < 2) {
    (**(code **)(*param_1 + 0xac))(param_1,7,0);
    FUN_00473880((int)param_1);
    (**(code **)(*param_1 + 0xf4))();
    FUN_004737f0(param_1);
    (**(code **)(*param_1 + 0x10c))();
    FUN_0047114c(param_1,'\x01');
    (**(code **)(*param_1 + 0x244))(param_1,extraout_EDX & 0xffffff00);
    cVar1 = (**(code **)(*param_1 + 0xd0))();
  }
  return cVar1;
}

