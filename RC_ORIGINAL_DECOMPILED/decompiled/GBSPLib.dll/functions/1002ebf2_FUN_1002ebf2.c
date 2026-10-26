/*
 * FUN_1002ebf2 at 1002ebf2
 * undefined FUN_1002ebf2(void)
 * Address ranges: 1002ebf2-1002ec8a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1002ebf2(void)

{
  void *pvVar1;
  char *pcVar2;
  int local_c;
  int local_8;
  
  if (DAT_1052a98c == 0) {
    FUN_100304f3();
  }
  GetModuleFileNameA((HMODULE)0x0,&DAT_1052a4a4,0x104);
  _DAT_1052a490 = &DAT_1052a4a4;
  pcVar2 = &DAT_1052a4a4;
  if (*DAT_1052bae4 != '\0') {
    pcVar2 = DAT_1052bae4;
  }
  FUN_1002ec8b(pcVar2,0,0,&local_8,&local_c);
  pvVar1 = _malloc(local_c + local_8 * 4);
  if (pvVar1 == (void *)0x0) {
    __amsg_exit(8);
  }
  FUN_1002ec8b(pcVar2,pvVar1,(void *)((int)pvVar1 + local_8 * 4),&local_8,&local_c);
  _DAT_1052a478 = pvVar1;
  _DAT_1052a474 = local_8 + -1;
  return;
}

