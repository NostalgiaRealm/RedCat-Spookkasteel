/*
 * FUN_0040e49a at 0040e49a
 * undefined __stdcall FUN_0040e49a(void)
 * Address ranges: 0040e49a-0040e532
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040e49a(void)

{
  undefined4 *puVar1;
  byte *pbVar2;
  int local_c;
  int local_8;
  
  if (DAT_00413f08 == 0) {
    FUN_0040ef3c();
  }
  GetModuleFileNameA((HMODULE)0x0,&DAT_00413568,0x104);
  _DAT_0041351c = &DAT_00413568;
  pbVar2 = &DAT_00413568;
  if (*DAT_00413f18 != 0) {
    pbVar2 = DAT_00413f18;
  }
  FUN_0040e533(pbVar2,(undefined4 *)0x0,(byte *)0x0,&local_8,&local_c);
  puVar1 = _malloc(local_c + local_8 * 4);
  if (puVar1 == (undefined4 *)0x0) {
    FUN_0040ca4f(8);
  }
  FUN_0040e533(pbVar2,puVar1,(byte *)(puVar1 + local_8),&local_8,&local_c);
  _DAT_00413504 = puVar1;
  _DAT_00413500 = local_8 + -1;
  return;
}

