/*
 * FUN_00476ce0 at 00476ce0
 * int * __register FUN_00476ce0(int * param_1, char param_2, int param_3, int * param_4, int param_5, undefined4 * param_6, byte param_7, undefined1 param_8, undefined4 * param_9)
 * Address ranges: 00476ce0-00476d9d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * FUN_00476ce0(int *param_1,char param_2,int param_3,int *param_4,int param_5,
                  undefined4 *param_6,byte param_7,undefined1 param_8,undefined4 *param_9)

{
  int *piVar1;
  int extraout_ECX;
  int iVar2;
  undefined4 extraout_ECX_00;
  char extraout_DL;
  char cVar3;
  int *piVar4;
  undefined4 *in_FS_OFFSET;
  byte bVar5;
  undefined4 in_stack_ffffffb8;
  undefined4 in_stack_ffffffbc;
  int local_29 [9];
  char local_5;
  
  bVar5 = 0;
  cVar3 = '\0';
  if (param_2 != '\0') {
    param_1 = (int *)FUN_004033d4((int)param_1,param_2,param_3,in_stack_ffffffb8,in_stack_ffffffbc);
    param_3 = extraout_ECX;
    cVar3 = extraout_DL;
  }
  piVar1 = local_29;
  for (iVar2 = 9; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar1 = *param_4;
    param_4 = param_4 + (uint)bVar5 * -2 + 1;
    piVar1 = piVar1 + (uint)bVar5 * -2 + 1;
  }
  local_5 = cVar3;
  piVar1 = local_29;
  piVar4 = param_1 + 2;
  for (iVar2 = 9; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar4 = *piVar1;
    piVar1 = piVar1 + (uint)bVar5 * -2 + 1;
    piVar4 = piVar4 + (uint)bVar5 * -2 + 1;
  }
  FUN_00406a48((undefined4 *)PTR_PTR_005723e4,param_1 + 0xf);
  FUN_00406a48((undefined4 *)PTR_PTR_00572134,param_1 + 0x10);
  param_1[0x17] = param_3;
  param_1[0x18] = param_5;
  piVar1 = FUN_00475a74((int *)&DAT_00474b58,'\x01',param_3,local_29,param_5,param_6,param_7,param_8
                       );
  param_1[1] = (int)piVar1;
  if (param_9 != (undefined4 *)0x0) {
    FUN_00476dc4((int)param_1,param_9,CONCAT31((int3)((uint)extraout_ECX_00 >> 8),param_8),param_6,
                 param_7);
  }
  if (local_5 != '\0') {
    FUN_0040342c(param_1);
    *in_FS_OFFSET = in_stack_ffffffb8;
  }
  return param_1;
}

