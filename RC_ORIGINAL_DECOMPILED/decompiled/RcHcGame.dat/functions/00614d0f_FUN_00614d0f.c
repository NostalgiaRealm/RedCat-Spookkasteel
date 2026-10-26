/*
 * FUN_00614d0f at 00614d0f
 * undefined FUN_00614d0f(void)
 * Address ranges: 00614d0f-00614d95
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __thiscall FUN_00614d0f(undefined4 *param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  
  uVar3 = param_2 + 7U & 0xfffffff8;
  if (param_3 != 0) {
    iVar1 = (*(code *)*param_1)(uVar3);
    return iVar1;
  }
  if (uVar3 == 0) {
    uVar3 = 1;
  }
  if ((uint)param_1[4] < uVar3) {
    if (uVar3 < 0x1fd) {
      puVar2 = (undefined4 *)FUN_00614d0f(0x200,1);
      if (puVar2 == (undefined4 *)0x0) {
        puVar2 = (undefined4 *)0x0;
      }
      else {
        *puVar2 = 0;
      }
      if (puVar2 != (undefined4 *)0x0) {
        if ((undefined4 *)param_1[3] == (undefined4 *)0x0) {
          param_1[3] = puVar2;
          param_1[2] = puVar2;
        }
        else {
          *(undefined4 *)param_1[3] = puVar2;
          param_1[3] = puVar2;
        }
        param_1[4] = 0x1fc - uVar3;
        goto LAB_00614d86;
      }
    }
    iVar1 = 0;
  }
  else {
    param_1[4] = param_1[4] - uVar3;
LAB_00614d86:
    iVar1 = param_1[3] + 4 + param_1[4];
  }
  return iVar1;
}

