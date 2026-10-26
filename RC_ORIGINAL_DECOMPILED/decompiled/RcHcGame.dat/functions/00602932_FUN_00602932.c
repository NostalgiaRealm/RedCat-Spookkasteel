/*
 * FUN_00602932 at 00602932
 * undefined FUN_00602932(void)
 * Address ranges: 00602932-00602a03
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00602932(undefined4 *param_1,undefined4 param_2,undefined4 param_3,int param_4,
                 undefined4 param_5,undefined4 param_6)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  char local_50 [68];
  undefined4 local_c;
  undefined4 local_8;
  
  iVar2 = FUN_0060d588(local_50,&DAT_006b0fa8,param_6);
  iVar3 = *(int *)(param_4 + 0x14);
  if ((iVar3 < 1) || (iVar3 <= iVar2)) {
    iVar3 = 0;
  }
  else {
    iVar3 = iVar3 - iVar2;
  }
  if ((*(uint *)(param_4 + 0xc) & 0x1c0) != 0x40) {
    for (; iVar3 != 0; iVar3 = iVar3 + -1) {
      local_c = param_2;
      local_8 = param_3;
      FUN_006035a1(param_5);
      param_2 = local_c;
      param_3 = local_8;
    }
    iVar3 = 0;
  }
  pcVar5 = local_50;
  local_c = param_2;
  local_8 = param_3;
  uVar4 = local_c;
  uVar1 = local_8;
  for (; local_c = uVar4, local_8 = uVar1, iVar2 != 0; iVar2 = iVar2 + -1) {
    uVar4 = FUN_0060a03a((int)*pcVar5);
    FUN_006035a1(uVar4);
    pcVar5 = pcVar5 + 1;
    uVar4 = local_c;
    uVar1 = local_8;
  }
  *(undefined4 *)(param_4 + 0x14) = 0;
  for (; iVar3 != 0; iVar3 = iVar3 + -1) {
    FUN_006035a1(param_5);
  }
  *param_1 = uVar4;
  param_1[1] = uVar1;
  return;
}

