/*
 * FUN_0049b81c at 0049b81c
 * undefined __register FUN_0049b81c(int * param_1, HPALETTE param_2)
 * Address ranges: 0049b81c-0049b881
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0049b81c(int *param_1,HPALETTE param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  byte bVar4;
  int local_80c [256];
  tagPALETTEENTRY local_40c [256];
  HPALETTE local_c;
  int *local_8;
  
  bVar4 = 0;
  local_c = param_2;
  local_8 = param_1;
  GetPaletteEntries(param_2,0,0x100,local_40c);
  DeleteObject(local_c);
  FUN_00498bf8((int)local_40c,(int)local_80c);
  piVar2 = local_80c;
  piVar3 = local_8 + 0x25;
  for (iVar1 = 0x100; iVar1 != 0; iVar1 = iVar1 + -1) {
    *piVar3 = *piVar2;
    piVar2 = piVar2 + (uint)bVar4 * -2 + 1;
    piVar3 = piVar3 + (uint)bVar4 * -2 + 1;
  }
  FUN_0049b9f8(local_8);
  return;
}

