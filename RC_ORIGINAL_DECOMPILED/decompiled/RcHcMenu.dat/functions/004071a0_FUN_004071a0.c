/*
 * FUN_004071a0 at 004071a0
 * undefined __register FUN_004071a0(undefined * param_1, char * param_2)
 * Address ranges: 004071a0-004071cd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004071a0(undefined *param_1,char *param_2)

{
  char cVar1;
  uint uVar2;
  char *pcVar3;
  
  uVar2 = 0xffffffff;
  pcVar3 = param_2;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  FUN_004070c3(param_1,-(~uVar2 - 1));
  FUN_00407058(param_1,param_2,~uVar2 - 1);
  return;
}

