/*
 * FUN_00402e90 at 00402e90
 * undefined __register FUN_00402e90(char * param_1, char * param_2, uint param_3)
 * Address ranges: 00402e90-00402ea0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00402e90(char *param_1,char *param_2,uint param_3)

{
  char cVar1;
  char cVar2;
  uint uVar3;
  
  uVar3 = param_3 & 0xff;
  do {
    if (uVar3 == 0) {
      return;
    }
    uVar3 = uVar3 - 1;
    cVar2 = *param_2;
    cVar1 = *param_1;
    param_1 = param_1 + 1;
    param_2 = param_2 + 1;
  } while (cVar1 == cVar2);
  return;
}

