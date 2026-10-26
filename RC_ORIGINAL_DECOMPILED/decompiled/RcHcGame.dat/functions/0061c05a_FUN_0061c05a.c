/*
 * FUN_0061c05a at 0061c05a
 * undefined FUN_0061c05a(void)
 * Address ranges: 0061c05a-0061c0f2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0061c05a(void)

{
  void *pvVar1;
  char *pcVar2;
  int local_c;
  int local_8;
  
  if (DAT_00747ea8 == 0) {
    FUN_0061b888();
  }
  GetModuleFileNameA((HMODULE)0x0,&DAT_007101fc,0x104);
  _DAT_0070ffd0 = &DAT_007101fc;
  pcVar2 = &DAT_007101fc;
  if (*DAT_00747eb4 != '\0') {
    pcVar2 = DAT_00747eb4;
  }
  FUN_0061c0f3(pcVar2,0,0,&local_8,&local_c);
  pvVar1 = _malloc(local_c + local_8 * 4);
  if (pvVar1 == (void *)0x0) {
    __amsg_exit(8);
  }
  FUN_0061c0f3(pcVar2,pvVar1,(void *)((int)pvVar1 + local_8 * 4),&local_8,&local_c);
  _DAT_0070ffb8 = pvVar1;
  _DAT_0070ffb4 = local_8 + -1;
  return;
}

