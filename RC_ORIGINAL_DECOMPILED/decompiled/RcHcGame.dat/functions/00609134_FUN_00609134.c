/*
 * FUN_00609134 at 00609134
 * undefined FUN_00609134(void)
 * Address ranges: 00609134-006091b2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __thiscall FUN_00609134(int param_1,uint param_2,uint param_3,char param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  if (*(uint *)(param_1 + 8) < param_2) {
    FUN_005fe747();
  }
  if (-*(int *)(param_1 + 8) - 1U <= param_3) {
    FUN_005fe5fb();
  }
  if (param_3 != 0) {
    iVar3 = param_3 + *(int *)(param_1 + 8);
    cVar1 = FUN_00401940(iVar3,0);
    if (cVar1 != '\0') {
      iVar2 = *(int *)(param_1 + 4) + param_2;
      FUN_0060ab50(iVar2 + param_3,iVar2,*(int *)(param_1 + 8) - param_2);
      _memset((void *)(*(int *)(param_1 + 4) + param_2),(int)param_4,param_3);
      *(int *)(param_1 + 8) = iVar3;
      *(undefined1 *)(*(int *)(param_1 + 4) + iVar3) = 0;
    }
  }
  return param_1;
}

