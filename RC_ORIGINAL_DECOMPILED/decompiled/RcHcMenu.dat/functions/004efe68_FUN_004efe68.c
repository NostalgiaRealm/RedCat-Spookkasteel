/*
 * FUN_004efe68 at 004efe68
 * undefined __register FUN_004efe68(int * param_1, ushort * param_2, byte param_3)
 * Address ranges: 004efe68-004eff81
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004efe68(int *param_1,ushort *param_2,byte param_3)

{
  ushort uVar1;
  
  if (*(char *)((int)param_1 + 0x206) == '\0') {
    uVar1 = *param_2;
    if (uVar1 < 0x27) {
      if (uVar1 != 0x26) {
        if (uVar1 == 0xd) {
          if ((char)param_1[0x88] == '\0') {
            return;
          }
          if (*(char *)((int)param_1 + 0x205) == '\0') {
            return;
          }
          if ((param_3 & 2) != 0) {
            return;
          }
          FUN_004efdb4(param_1,'\x01');
          *param_2 = 0;
          return;
        }
        if (uVar1 != 0x1b) {
          return;
        }
        if (*(char *)((int)param_1 + 0x205) == '\0') {
          return;
        }
        if ((param_3 & 2) != 0) {
          return;
        }
        FUN_004efdb4(param_1,'\0');
        *param_2 = 0;
        return;
      }
    }
    else if (uVar1 != 0x28) {
      if (uVar1 != 0x73) {
        return;
      }
      if (param_3 != 0) {
        return;
      }
      if (*(char *)((int)param_1 + 0x205) == '\0') {
        FUN_004eff88(param_1);
      }
      else {
        FUN_004efdb4(param_1,'\0');
      }
      *param_2 = 0;
      return;
    }
    if ((param_3 & 2) != 0) {
      if (*(char *)((int)param_1 + 0x205) == '\0') {
        FUN_004eff88(param_1);
      }
      else {
        FUN_004efdb4(param_1,'\0');
      }
      *param_2 = 0;
    }
  }
  return;
}

