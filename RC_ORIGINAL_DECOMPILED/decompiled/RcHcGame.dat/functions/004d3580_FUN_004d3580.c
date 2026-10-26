/*
 * FUN_004d3580 at 004d3580
 * undefined FUN_004d3580(void)
 * Address ranges: 004d3580-004d3607
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_004d3580(undefined4 *param_1)

{
  char cVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_0064f078;
  iVar2 = param_1[99];
  if (iVar2 != 0) {
    cVar1 = *(char *)(iVar2 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_005fe5f0((char *)(iVar2 + -1));
    }
    else {
      *(char *)(iVar2 + -1) = cVar1 + -1;
    }
  }
  param_1[99] = 0;
  param_1[100] = 0;
  param_1[0x65] = 0;
  iVar2 = param_1[0x5f];
  if (iVar2 != 0) {
    cVar1 = *(char *)(iVar2 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_005fe5f0((char *)(iVar2 + -1));
    }
    else {
      *(char *)(iVar2 + -1) = cVar1 + -1;
    }
  }
  param_1[0x5f] = 0;
  param_1[0x60] = 0;
  param_1[0x61] = 0;
  FUN_004cfb70();
  return;
}

