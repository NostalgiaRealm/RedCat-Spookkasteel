/*
 * FUN_0040eb0a at 0040eb0a
 * undefined __register FUN_0040eb0a(undefined1 * param_1, uint * param_2, char param_3)
 * Address ranges: 0040eb0a-0040ebd5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0040eb0a(undefined1 *param_1,uint *param_2,char param_3)

{
  uint uVar1;
  undefined2 extraout_var;
  uint uVar2;
  undefined4 extraout_EDX;
  int unaff_ESI;
  bool bVar3;
  short local_44;
  char local_41;
  int local_14;
  char local_10;
  undefined1 *local_8;
  
  uVar2 = 2;
  if (param_3 == '\0') {
    uVar1 = (uint)(ushort)param_2[2] | *param_2 | param_2[1];
    bVar3 = uVar1 == 0;
    if (!bVar3) {
      uVar2 = (uint)(ushort)((ushort)param_2[2] >> 0xf);
      bVar3 = uVar2 == 0;
    }
  }
  else {
    uVar1 = *param_2 | param_2[1];
    bVar3 = uVar1 == 0;
    if (!bVar3) {
      uVar2 = -((int)param_2[1] >> 0x1f);
      bVar3 = uVar2 == 0;
    }
  }
  local_8 = param_1;
  FUN_0040ebd6(uVar1,param_2,uVar2);
  if (!bVar3) {
    FUN_0040ec11();
    FUN_0040eddd(&local_44,param_2,param_3);
    if (((local_44 != -0x8000) && (local_44 != 0x7fff)) &&
       ((param_3 != '\0' || ((local_44 < 0x13 || (local_10 != '\0')))))) {
      bVar3 = local_41 == '\0';
      if (bVar3) {
        FUN_0040ebd6(CONCAT22(extraout_var,local_44),extraout_EDX,2);
        if (bVar3) goto LAB_0040eb98;
        if (unaff_ESI != local_14) {
          FUN_0040ec11();
        }
      }
      FUN_0040ecbc();
      return;
    }
  }
LAB_0040eb98:
  FUN_0040e83a(local_8,param_2,param_3,0,0xf,0);
  return;
}

