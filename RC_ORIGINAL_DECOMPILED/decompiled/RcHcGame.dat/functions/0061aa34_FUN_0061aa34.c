/*
 * FUN_0061aa34 at 0061aa34
 * undefined FUN_0061aa34(void)
 * Address ranges: 0061aa34-0061aa99
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0061aa34(char *param_1)

{
  int iVar1;
  undefined4 uVar2;
  char local_c [8];
  
  if (((param_1 == (char *)0x0) || (*param_1 == '\0')) ||
     (iVar1 = _strcmp(param_1,"ACP"), iVar1 == 0)) {
    uVar2 = 0x1004;
  }
  else {
    iVar1 = _strcmp(param_1,"OCP");
    if (iVar1 != 0) goto LAB_0061aa90;
    uVar2 = 0xb;
  }
  iVar1 = (*DAT_007101c4)(DAT_007101c0,uVar2,local_c,8);
  if (iVar1 == 0) {
    return;
  }
  param_1 = local_c;
LAB_0061aa90:
  FUN_0060ae85(param_1);
  return;
}

