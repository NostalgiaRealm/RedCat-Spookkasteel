/*
 * FUN_100076a6 at 100076a6
 * undefined __stdcall FUN_100076a6(void)
 * Address ranges: 100076a6-1000773e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100076a6(void)

{
  undefined4 *puVar1;
  byte *pbVar2;
  int local_c;
  int local_8;
  
  if (DAT_101f5a88 == 0) {
    FUN_10009c81();
  }
  GetModuleFileNameA((HMODULE)0x0,&DAT_100e3b3c,0x104);
  _DAT_100e3b28 = &DAT_100e3b3c;
  pbVar2 = &DAT_100e3b3c;
  if (*DAT_101f6ac4 != 0) {
    pbVar2 = DAT_101f6ac4;
  }
  FUN_1000773f(pbVar2,(undefined4 *)0x0,(byte *)0x0,&local_8,&local_c);
  puVar1 = _malloc(local_c + local_8 * 4);
  if (puVar1 == (undefined4 *)0x0) {
    __amsg_exit(8);
  }
  FUN_1000773f(pbVar2,puVar1,(byte *)(puVar1 + local_8),&local_8,&local_c);
  _DAT_100e3b10 = puVar1;
  _DAT_100e3b0c = local_8 + -1;
  return;
}

