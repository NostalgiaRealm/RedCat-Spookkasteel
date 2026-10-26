/*
 * FUN_0047373c at 0047373c
 * char __register FUN_0047373c(int * param_1)
 * Address ranges: 0047373c-004737ea
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char FUN_0047373c(int *param_1)

{
  char cVar1;
  uint extraout_EDX;
  bool bVar2;
  
  cVar1 = *(char *)((int)param_1 + 0x8d) + -4;
  if ((byte)(*(char *)((int)param_1 + 0x8d) - 2U) < 2) {
    FUN_004736e8();
    (**(code **)(*param_1 + 0xac))(param_1,7,0);
    (**(code **)(*param_1 + 0xdc))();
    bVar2 = *(char *)((int)param_1 + 0x8d) == '\x03';
    if (bVar2) {
      (**(code **)(*param_1 + 0xfc))();
    }
    FUN_00473130(param_1);
    (**(code **)(*param_1 + 0x15c))();
    (**(code **)(*param_1 + 0x10c))();
    FUN_0047114c(param_1,'\x01');
    (**(code **)(*param_1 + 0x244))(param_1,extraout_EDX & 0xffffff00);
    cVar1 = (**(code **)(*param_1 + 0xb8))();
    if (bVar2) {
      cVar1 = (**(code **)(*param_1 + 0xd8))();
    }
  }
  return cVar1;
}

