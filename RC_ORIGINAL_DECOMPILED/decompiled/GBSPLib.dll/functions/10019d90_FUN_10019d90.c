/*
 * FUN_10019d90 at 10019d90
 * undefined FUN_10019d90(void)
 * Address ranges: 10019d90-10019e5c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool __fastcall FUN_10019d90(int *param_1,int *param_2,int *param_3,int *param_4)

{
  int iVar1;
  undefined4 unaff_EDI;
  undefined4 *unaff_retaddr;
  int local_1c [3];
  undefined4 uStack_10;
  undefined4 *puStack_4;
  
  if (*param_1 != 0) {
    return false;
  }
  *param_1 = 1;
  *param_2 = 0;
  if (param_1[7] == 0) {
    if (param_1[9] != 0) {
      iVar1 = (**(code **)(param_1[8] + 0x54))(local_1c);
      if (iVar1 == 0) {
        return false;
      }
      if (local_1c[0] != 1) {
        return false;
      }
      iVar1 = (**(code **)(param_1[8] + 0x3c))(param_2);
      if (iVar1 == 0) {
        *param_2 = 0;
      }
      param_1[10] = *param_2;
      if (puStack_4 != (undefined4 *)0x0) {
        *puStack_4 = uStack_10;
      }
      if (unaff_retaddr != (undefined4 *)0x0) {
        *unaff_retaddr = unaff_EDI;
      }
    }
  }
  else {
    *param_2 = param_1[7];
    if (param_3 != (int *)0x0) {
      *param_3 = param_1[2];
    }
    if (param_4 != (int *)0x0) {
      *param_4 = param_1[3];
      return *param_2 != 0;
    }
  }
  return *param_2 != 0;
}

