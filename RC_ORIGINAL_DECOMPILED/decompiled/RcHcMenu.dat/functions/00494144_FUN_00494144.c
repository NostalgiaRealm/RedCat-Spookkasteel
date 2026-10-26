/*
 * FUN_00494144 at 00494144
 * byte __register FUN_00494144(int * param_1, int * param_2)
 * Address ranges: 00494144-00494276
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

byte FUN_00494144(int *param_1,int *param_2)

{
  bool bVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  int *piVar7;
  byte local_44 [28];
  int *local_28;
  int *local_24;
  int *local_20;
  int *local_1c;
  int *local_18;
  int *local_14;
  byte local_d;
  int *local_c;
  int *local_8;
  
  local_d = 0;
  local_18 = param_1;
  local_14 = param_2;
  local_c = param_2;
  local_8 = param_1;
  bVar1 = FUN_004940cc(param_2,local_44);
  if (bVar1) {
    do {
      local_1c = (int *)FUN_00494c5c(local_14,local_44);
      local_20 = (int *)FUN_00494c5c(local_18,local_44);
      iVar4 = FUN_00496d84((int)local_20);
      if ((*(byte *)(iVar4 + 0x19) & 0x20) == 0) {
        cVar2 = (**(code **)(*local_1c + 0x4c))();
        if (cVar2 == '\0') {
          cVar2 = (**(code **)(*local_20 + 0x4c))();
          if (cVar2 != '\0') {
            (**(code **)(*local_20 + 0x68))();
          }
        }
        else {
          bVar3 = FUN_00495f94(local_20,local_1c);
          local_d = bVar3 | local_d;
        }
      }
      uVar5 = FUN_0040320c(local_1c,(int)&PTR_FUN_0048ce0c);
      if ((char)uVar5 != '\0') {
        local_24 = (int *)FUN_00403224(local_1c,(int)&PTR_FUN_0048ce0c);
        local_28 = (int *)FUN_00403224(local_20,(int)&PTR_FUN_0048ce0c);
        bVar1 = FUN_0047445c((int)local_24);
        if (bVar1) {
          piVar6 = (int *)FUN_004744a0(local_24);
          piVar7 = (int *)FUN_004744a0(local_28);
          bVar3 = FUN_00493768(piVar7,piVar6);
          local_d = bVar3 | local_d;
        }
        else {
          bVar1 = FUN_0047445c((int)local_28);
          if (bVar1) {
            piVar6 = (int *)FUN_004744a0(local_28);
            FUN_00494398(piVar6);
            local_d = 1;
          }
        }
      }
      cVar2 = FUN_004940f4(local_14,local_44);
    } while (cVar2 != '\0');
  }
  bVar3 = (**(code **)(*local_8 + 0x10))(local_8,local_14);
  return bVar3 & local_d;
}

