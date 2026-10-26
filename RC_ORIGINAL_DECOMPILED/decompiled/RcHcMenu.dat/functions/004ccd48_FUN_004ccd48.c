/*
 * FUN_004ccd48 at 004ccd48
 * int __register FUN_004ccd48(int * param_1, int param_2, int param_3, undefined4 * param_4)
 * Address ranges: 004ccd48-004ccdd7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_004ccd48(int *param_1,int param_2,int param_3,undefined4 *param_4)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  byte *pbVar4;
  int local_5c;
  int local_58;
  byte local_54 [28];
  byte local_38 [28];
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int *local_8;
  
  pbVar4 = local_38;
  for (iVar3 = 7; iVar3 != 0; iVar3 = iVar3 + -1) {
    *(undefined4 *)pbVar4 = *param_4;
    param_4 = param_4 + 1;
    pbVar4 = pbVar4 + 4;
  }
  local_14 = -1;
  local_10 = param_3;
  local_c = param_2;
  local_8 = param_1;
  iVar3 = FUN_0045da14((int)param_1);
  uVar2 = iVar3 - 1;
  if (SBORROW4(iVar3,1)) {
    uVar2 = thunk_FUN_00402874(uVar2);
  }
  if (-1 < (int)uVar2) {
    local_1c = uVar2 + 1;
    local_18 = 0;
    do {
      FUN_004cccb0(local_8,local_18,&local_5c);
      if (((local_5c == local_c) && (local_58 == local_10)) &&
         (cVar1 = FUN_0048d3ac(local_54,local_38), cVar1 != '\0')) {
        return local_18;
      }
      local_18 = local_18 + 1;
      local_1c = local_1c + -1;
    } while (local_1c != 0);
  }
  return local_14;
}

