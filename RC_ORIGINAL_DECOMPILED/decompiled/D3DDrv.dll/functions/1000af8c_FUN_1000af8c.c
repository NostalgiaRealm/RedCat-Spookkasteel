/*
 * FUN_1000af8c at 1000af8c
 * undefined __stdcall FUN_1000af8c(void)
 * Address ranges: 1000af8c-1000b024
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000af8c(void)

{
  undefined4 *puVar1;
  byte *pbVar2;
  int local_c;
  int local_8;
  
  if (DAT_101c3dc8 == 0) {
    FUN_1000e327();
  }
  GetModuleFileNameA((HMODULE)0x0,&DAT_101c37cc,0x104);
  _DAT_101c37b8 = &DAT_101c37cc;
  pbVar2 = &DAT_101c37cc;
  if (*DAT_101c4e04 != 0) {
    pbVar2 = DAT_101c4e04;
  }
  FUN_1000b025(pbVar2,(undefined4 *)0x0,(byte *)0x0,&local_8,&local_c);
  puVar1 = _malloc(local_c + local_8 * 4);
  if (puVar1 == (undefined4 *)0x0) {
    __amsg_exit(8);
  }
  FUN_1000b025(pbVar2,puVar1,(byte *)(puVar1 + local_8),&local_8,&local_c);
  _DAT_101c37a0 = puVar1;
  _DAT_101c379c = local_8 + -1;
  return;
}

