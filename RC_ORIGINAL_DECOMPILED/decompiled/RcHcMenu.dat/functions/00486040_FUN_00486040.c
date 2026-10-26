/*
 * FUN_00486040 at 00486040
 * undefined __register FUN_00486040(int * param_1, uint * param_2, char param_3)
 * Address ranges: 00486040-004860ca
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00486040(int *param_1,uint *param_2,char param_3)

{
  uint uVar1;
  int iVar2;
  undefined1 uVar3;
  undefined1 local_10;
  
  local_10 = 0x51;
  uVar1 = FUN_004714b4((int)param_1);
  uVar3 = (char)uVar1 == '\0';
  if (!(bool)uVar3) {
    FUN_00473b1c(param_1);
    local_10 = 0x66;
    FUN_00404140((uint *)param_1[0x1b],param_2);
    if ((!(bool)uVar3) || (param_3 != (char)param_1[0x23])) {
      if (param_2 == (uint *)0x0) {
        iVar2 = 0;
        local_10 = 0x66;
      }
      else {
        iVar2 = FUN_00485d68((int)param_1,param_2,param_3);
        local_10 = 0;
      }
      FUN_00485fc8(param_1,param_1 + 0x61,iVar2);
    }
  }
  FUN_00473ab0((int)param_1,param_2);
  FUN_00473aa0((int)param_1,local_10);
  uVar1 = FUN_004714b4((int)param_1);
  if (((char)uVar1 != '\0') && ((char)param_1[0x26] != '\0')) {
    FUN_00473334(param_1);
  }
  return;
}

