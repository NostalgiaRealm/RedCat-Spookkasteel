/*
 * FUN_10002180 at 10002180
 * undefined FUN_10002180(void)
 * Address ranges: 10002180-100021de
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10002180(char *param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  char *pcVar4;
  undefined4 *puVar5;
  
  if (param_1 != (char *)0x0) {
    uVar2 = 0xffffffff;
    pcVar4 = param_1;
    do {
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    if (~uVar2 - 1 < 0x1001) {
      FUN_10018feb(&DAT_10024918,param_1,&stack0x00000008);
      OutputDebugStringA((LPCSTR)&DAT_10024918);
      return;
    }
  }
  pcVar4 = s__String_missing_or_too_large__100210c4;
  puVar5 = &DAT_10024918;
  for (iVar3 = 7; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    puVar5 = puVar5 + 1;
  }
  *(undefined2 *)puVar5 = *(undefined2 *)pcVar4;
  OutputDebugStringA((LPCSTR)&DAT_10024918);
  return;
}

