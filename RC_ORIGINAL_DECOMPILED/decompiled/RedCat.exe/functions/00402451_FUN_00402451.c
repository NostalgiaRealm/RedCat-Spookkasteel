/*
 * FUN_00402451 at 00402451
 * undefined __stdcall FUN_00402451(void)
 * Address ranges: 00402451-004024e9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00402451(void)

{
  undefined4 *puVar1;
  byte *pbVar2;
  int local_c;
  int local_8;
  
  if (DAT_0040948c == 0) {
    FUN_0040365b();
  }
  GetModuleFileNameA((HMODULE)0x0,&DAT_00407fc0,0x104);
  _DAT_00407f9c = &DAT_00407fc0;
  pbVar2 = &DAT_00407fc0;
  if (*DAT_00409484 != 0) {
    pbVar2 = DAT_00409484;
  }
  FUN_004024ea(pbVar2,(undefined4 *)0x0,(byte *)0x0,&local_8,&local_c);
  puVar1 = _malloc(local_c + local_8 * 4);
  if (puVar1 == (undefined4 *)0x0) {
    __amsg_exit(8);
  }
  FUN_004024ea(pbVar2,puVar1,(byte *)(puVar1 + local_8),&local_8,&local_c);
  _DAT_00407f84 = puVar1;
  _DAT_00407f80 = local_8 + -1;
  return;
}

