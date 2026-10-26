/*
 * FUN_1000cf78 at 1000cf78
 * undefined __stdcall FUN_1000cf78(void)
 * Address ranges: 1000cf78-1000d010
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000cf78(void)

{
  undefined4 *puVar1;
  byte *pbVar2;
  int local_c;
  int local_8;
  
  if (DAT_100ec808 == 0) {
    FUN_100107a3();
  }
  GetModuleFileNameA((HMODULE)0x0,&DAT_100ec20c,0x104);
  _DAT_100ec1f8 = &DAT_100ec20c;
  pbVar2 = &DAT_100ec20c;
  if (*DAT_100ed844 != 0) {
    pbVar2 = DAT_100ed844;
  }
  FUN_1000d011(pbVar2,(undefined4 *)0x0,(byte *)0x0,&local_8,&local_c);
  puVar1 = _malloc(local_c + local_8 * 4);
  if (puVar1 == (undefined4 *)0x0) {
    __amsg_exit(8);
  }
  FUN_1000d011(pbVar2,puVar1,(byte *)(puVar1 + local_8),&local_8,&local_c);
  _DAT_100ec1e0 = puVar1;
  _DAT_100ec1dc = local_8 + -1;
  return;
}

