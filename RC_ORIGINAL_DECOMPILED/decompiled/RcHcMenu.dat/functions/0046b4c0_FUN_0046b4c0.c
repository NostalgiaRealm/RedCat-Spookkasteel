/*
 * FUN_0046b4c0 at 0046b4c0
 * int * __register FUN_0046b4c0(int * param_1, char param_2, int * param_3)
 * Address ranges: 0046b4c0-0046b545
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * FUN_0046b4c0(int *param_1,char param_2,int *param_3)

{
  int *extraout_ECX;
  int iVar1;
  char extraout_DL;
  char cVar2;
  undefined4 *puVar3;
  byte *pbVar4;
  int *piVar5;
  undefined4 *in_FS_OFFSET;
  byte bVar6;
  undefined4 in_stack_ffffffc0;
  undefined4 in_stack_ffffffc4;
  byte local_24 [32];
  
  bVar6 = 0;
  cVar2 = '\0';
  if (param_2 != '\0') {
    param_1 = (int *)FUN_004033d4((int)param_1,param_2,param_3,in_stack_ffffffc0,in_stack_ffffffc4);
    param_3 = extraout_ECX;
    cVar2 = extraout_DL;
  }
  FUN_0046aa04(param_1,'\0',param_3);
  FUN_00469d10((int)param_1,6);
  param_1[0x37] = 0xf;
  puVar3 = &DAT_0046b548;
  pbVar4 = local_24;
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pbVar4 = *puVar3;
    puVar3 = puVar3 + (uint)bVar6 * -2 + 1;
    pbVar4 = pbVar4 + ((uint)bVar6 * -2 + 1) * 4;
  }
  local_24[(int)(uint)(byte)*PTR_DAT_005725bc >> 3] =
       local_24[(int)(uint)(byte)*PTR_DAT_005725bc >> 3] | '\x01' << ((byte)*PTR_DAT_005725bc & 7);
  pbVar4 = local_24;
  piVar5 = param_1 + 0x24;
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *piVar5 = *(int *)pbVar4;
    pbVar4 = pbVar4 + ((uint)bVar6 * -2 + 1) * 4;
    piVar5 = piVar5 + (uint)bVar6 * -2 + 1;
  }
  if (cVar2 != '\0') {
    FUN_0040342c(param_1);
    *in_FS_OFFSET = in_stack_ffffffc0;
  }
  return param_1;
}

