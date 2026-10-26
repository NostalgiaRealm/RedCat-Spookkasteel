/*
 * FUN_0048ee44 at 0048ee44
 * undefined1 __register FUN_0048ee44(int * param_1, byte * param_2)
 * Address ranges: 0048ee44-0048eeb1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 FUN_0048ee44(int *param_1,byte *param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  byte local_34 [28];
  int local_18;
  int local_14;
  undefined1 local_d;
  byte *local_c;
  int *local_8;
  
  local_d = 0;
  local_c = param_2;
  local_8 = param_1;
  iVar2 = FUN_0048ec24((int)param_1);
  uVar3 = iVar2 - 1;
  if (SBORROW4(iVar2,1)) {
    uVar3 = thunk_FUN_00402874(uVar3);
  }
  if (-1 < (int)uVar3) {
    local_18 = uVar3 + 1;
    local_14 = 0;
    do {
      FUN_0048f02c(local_8,local_14,(undefined4 *)local_34);
      cVar1 = FUN_0048d3ac(local_34,local_c);
      if (cVar1 != '\0') {
        FUN_0045d540(local_8,local_14);
        return 1;
      }
      local_14 = local_14 + 1;
      local_18 = local_18 + -1;
    } while (local_18 != 0);
  }
  return local_d;
}

