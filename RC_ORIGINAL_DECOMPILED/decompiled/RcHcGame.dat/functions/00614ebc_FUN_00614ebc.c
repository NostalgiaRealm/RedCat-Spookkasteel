/*
 * FUN_00614ebc at 00614ebc
 * undefined FUN_00614ebc(void)
 * Address ranges: 00614ebc-00614f75
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall FUN_00614ebc(undefined4 *param_1,undefined4 *param_2,char param_3)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  uint uVar4;
  int iVar5;
  
  iVar5 = 0;
  param_1[1] = param_1[1] & 0xffffff80;
  uVar4 = param_1[1];
  *param_1 = 0;
  pcVar2 = (char *)*param_2;
  if (pcVar2 == (char *)0x0) {
LAB_00614f53:
    uVar4 = uVar4 & 0xfffffff1 | 1;
  }
  else {
    if (*pcVar2 != '\0') {
      do {
        cVar1 = *(char *)*param_2;
        if (cVar1 == param_3) break;
        if ((((((cVar1 != '_') && (cVar1 != '$')) && ((cVar1 < 'a' || ('z' < cVar1)))) &&
             ((cVar1 < 'A' || ('Z' < cVar1)))) && ((cVar1 < '0' || ('9' < cVar1)))) &&
           ((DAT_00710064._2_1_ & 1) == 0)) {
          uVar4 = param_1[1];
          goto LAB_00614f53;
        }
        iVar5 = iVar5 + 1;
        pcVar3 = (char *)*param_2 + 1;
        *param_2 = pcVar3;
      } while (*pcVar3 != '\0');
      FUN_00615599(pcVar2,iVar5);
      cVar1 = *(char *)*param_2;
      if (cVar1 != '\0') {
        *param_2 = (char *)*param_2 + 1;
        if (cVar1 != param_3) {
          *param_1 = 0;
          param_1[1] = param_1[1] & 0xfffffff3 | 3;
          return param_1;
        }
        param_1[1] = param_1[1] & 0xfffffff0;
        return param_1;
      }
      uVar4 = param_1[1];
      if ((uVar4 & 0xf) != 0) {
        return param_1;
      }
    }
    uVar4 = uVar4 & 0xfffffff2 | 2;
  }
  param_1[1] = uVar4;
  return param_1;
}

