/*
 * FUN_1001bb37 at 1001bb37
 * undefined FUN_1001bb37(void)
 * Address ranges: 1001bb37-1001bbcf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1001bb37(void)

{
  void *pvVar1;
  char *pcVar2;
  int local_c;
  int local_8;
  
  if (DAT_1020fd48 == 0) {
    FUN_1001dcde();
  }
  GetModuleFileNameA((HMODULE)0x0,&DAT_10025d5c,0x104);
  _DAT_10025d48 = &DAT_10025d5c;
  pcVar2 = &DAT_10025d5c;
  if (*DAT_1020fd78 != '\0') {
    pcVar2 = DAT_1020fd78;
  }
  FUN_1001bbd0(pcVar2,0,0,&local_8,&local_c);
  pvVar1 = _malloc(local_c + local_8 * 4);
  if (pvVar1 == (void *)0x0) {
    __amsg_exit(8);
  }
  FUN_1001bbd0(pcVar2,pvVar1,(void *)((int)pvVar1 + local_8 * 4),&local_8,&local_c);
  _DAT_10025d30 = pvVar1;
  _DAT_10025d2c = local_8 + -1;
  return;
}

