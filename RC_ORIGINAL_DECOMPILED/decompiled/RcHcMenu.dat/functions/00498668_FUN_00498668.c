/*
 * FUN_00498668 at 00498668
 * undefined1 __register FUN_00498668(int param_1, int * param_2, char param_3, char param_4)
 * Address ranges: 00498668-004987ac
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 FUN_00498668(int param_1,int *param_2,char param_3,char param_4)

{
  char cVar1;
  int iVar2;
  int local_20;
  int local_1c;
  int local_18;
  code *local_14;
  undefined1 local_e;
  
  if ((*(int *)(param_1 + 0x8c) < param_2[0x23]) || (*(int *)(param_1 + 0x40) < param_2[0x10])) {
    FUN_00403d94("Assertion failure");
  }
  local_e = 1;
  if ((param_2[0xf] < 0x18) || (*(int *)(param_1 + 0x3c) < 0x20)) {
    local_e = 0;
  }
  else {
    if (param_3 == '\0') {
      if (param_2[0xf] == 0x20) {
        cVar1 = (**(code **)(*param_2 + 0x28))();
        if (cVar1 == '\0') {
          local_14 = (code *)&LAB_004981c4;
        }
        else {
          local_14 = (code *)&LAB_00498214;
        }
      }
      else {
        cVar1 = (**(code **)(*param_2 + 0x28))();
        if (cVar1 == '\0') {
          local_14 = FUN_004983f0;
        }
        else {
          local_14 = (code *)&LAB_00498450;
        }
      }
    }
    else if (param_2[0xf] == 0x20) {
      if (param_4 == -1) {
        local_14 = (code *)&LAB_00498280;
      }
      else {
        local_14 = FUN_00498328;
      }
    }
    else {
      cVar1 = (**(code **)(*param_2 + 0x28))();
      if (cVar1 == '\0') {
        local_14 = (code *)&LAB_004984e4;
      }
      else {
        local_14 = (code *)&LAB_00498588;
      }
    }
    local_1c = FUN_0049aefc((int)param_2);
    local_20 = FUN_0049aefc(param_1);
    iVar2 = param_2[0x10] + -1;
    local_18 = iVar2;
    if (-1 < iVar2) {
      do {
        (*local_14)(param_2,local_1c,local_20,CONCAT31((int3)((uint)iVar2 >> 8),param_4));
        local_1c = local_1c + param_2[0x11];
        iVar2 = *(int *)(param_1 + 0x44);
        local_20 = local_20 + iVar2;
        local_18 = local_18 + -1;
      } while (local_18 != -1);
    }
  }
  return local_e;
}

