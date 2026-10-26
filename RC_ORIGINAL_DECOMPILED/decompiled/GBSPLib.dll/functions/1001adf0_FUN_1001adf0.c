/*
 * FUN_1001adf0 at 1001adf0
 * undefined FUN_1001adf0(void)
 * Address ranges: 1001adf0-1001ae50
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __fastcall FUN_1001adf0(int param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  
  iVar2 = FUN_1001ae60();
  if (iVar2 != 0) {
    pcVar3 = (char *)FUN_1001ae80();
    cVar1 = *pcVar3;
    pcVar4 = pcVar3;
    for (; (cVar1 != '\n' && (0 < iVar2)); iVar2 = iVar2 + -1) {
      *param_2 = cVar1;
      cVar1 = pcVar4[1];
      param_2 = param_2 + 1;
      pcVar4 = pcVar4 + 1;
    }
    *(char **)(param_1 + 0x10) = pcVar4 + *(int *)(param_1 + 0x10) + (1 - (int)pcVar3);
    if (iVar2 != 0) {
      *param_2 = *pcVar4;
      return 1;
    }
  }
  return 0;
}

