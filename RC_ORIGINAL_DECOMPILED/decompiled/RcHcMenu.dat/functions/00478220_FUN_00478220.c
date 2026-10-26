/*
 * FUN_00478220 at 00478220
 * undefined __register FUN_00478220(undefined4 param_1, int param_2)
 * Address ranges: 00478220-004784ff
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00478220(undefined4 param_1,int param_2)

{
  undefined4 *puVar1;
  char *pcVar2;
  int iVar3;
  undefined4 *unaff_EBX;
  char *unaff_ESI;
  undefined4 *in_FS_OFFSET;
  char *local_4c;
  char *local_48;
  char *local_44;
  char *local_40;
  char *local_3c;
  char *local_38;
  char *local_34;
  char *local_30;
  char *local_2c;
  char *local_28;
  char *local_24;
  char *local_20;
  char *local_1c;
  char *local_18;
  char *local_c;
  char *local_8;
  
  local_18 = &stack0xfffffffc;
  iVar3 = 9;
  do {
    local_8 = (char *)0x0;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  local_1c = &LAB_00478500;
  local_20 = (char *)*in_FS_OFFSET;
  *in_FS_OFFSET = &local_20;
  *(undefined1 *)(param_2 + 0x20) = 1;
  local_24 = (char *)0x478250;
  FUN_004052a4((int *)&local_8,(VARIANTARG *)(param_2 + 8));
  local_24 = (char *)0x47825d;
  iVar3 = FUN_00409758(local_8,"COUNT(*)");
  if (iVar3 != 0) {
    local_24 = (char *)0x47826c;
    FUN_004052a4((int *)&local_c,(VARIANTARG *)(param_2 + 8));
    local_24 = (char *)0x478279;
    iVar3 = FUN_00409758(local_c,"GETDATE");
    if ((iVar3 != 0) &&
       ((*(int *)(param_2 + 0x28) == 0 || (*(int *)(*(int *)(param_2 + 0x28) + 8) == 0)))) {
      local_24 = (char *)0x478297;
      FUN_00406a48((undefined4 *)PTR_PTR_00572030,(int *)&stack0xfffffff0);
      local_24 = (char *)0x4782a1;
      FUN_00466d84(unaff_EBX,0);
    }
  }
  puVar1 = *(undefined4 **)(param_2 + 0x28);
  if ((puVar1 != (undefined4 *)0x0) && (0 < (int)puVar1[2])) {
    local_24 = (char *)0x4782b7;
    iVar3 = FUN_00412384(puVar1,0);
    *(undefined1 *)(param_2 + 0x2c) = *(undefined1 *)(iVar3 + 0x2c);
  }
  local_24 = (char *)0x4782c8;
  FUN_004052a4((int *)&stack0xffffffec,(VARIANTARG *)(param_2 + 8));
  local_24 = (char *)0x4782d5;
  iVar3 = FUN_00409758(unaff_ESI,"SUM");
  if (iVar3 != 0) {
    local_24 = (char *)0x4782e4;
    FUN_004052a4((int *)&local_18,(VARIANTARG *)(param_2 + 8));
    local_24 = (char *)0x4782f1;
    iVar3 = FUN_00409758(local_18,"AVG");
    if (iVar3 != 0) {
      local_24 = (char *)0x47830d;
      FUN_004052a4((int *)&local_1c,(VARIANTARG *)(param_2 + 8));
      local_24 = (char *)0x47831a;
      iVar3 = FUN_00409758(local_1c,"MIN");
      if (iVar3 != 0) {
        local_24 = (char *)0x478329;
        FUN_004052a4((int *)&local_20,(VARIANTARG *)(param_2 + 8));
        local_24 = (char *)0x478336;
        iVar3 = FUN_00409758(local_20,"MAX");
        if (iVar3 != 0) {
          local_24 = (char *)0x47835e;
          FUN_004052a4((int *)&local_24,(VARIANTARG *)(param_2 + 8));
          pcVar2 = local_24;
          local_24 = (char *)0x47836b;
          iVar3 = FUN_00409758(pcVar2,"COUNT");
          if (iVar3 != 0) {
            local_24 = (char *)0x47837a;
            FUN_004052a4((int *)&local_28,(VARIANTARG *)(param_2 + 8));
            local_24 = (char *)0x478387;
            iVar3 = FUN_00409758(local_28,"COUNT(*)");
            if (iVar3 != 0) {
              local_24 = (char *)0x4783a3;
              FUN_004052a4((int *)&local_2c,(VARIANTARG *)(param_2 + 8));
              local_24 = (char *)0x4783b0;
              iVar3 = FUN_00409758(local_2c,"YEAR");
              if (iVar3 != 0) {
                local_24 = (char *)0x4783c3;
                FUN_004052a4((int *)&local_30,(VARIANTARG *)(param_2 + 8));
                local_24 = (char *)0x4783d0;
                iVar3 = FUN_00409758(local_30,"MONTH");
                if (iVar3 != 0) {
                  local_24 = (char *)0x4783df;
                  FUN_004052a4((int *)&local_34,(VARIANTARG *)(param_2 + 8));
                  local_24 = (char *)0x4783ec;
                  iVar3 = FUN_00409758(local_34,"DAY");
                  if (iVar3 != 0) {
                    local_24 = (char *)0x4783fb;
                    FUN_004052a4((int *)&local_38,(VARIANTARG *)(param_2 + 8));
                    local_24 = (char *)0x478408;
                    iVar3 = FUN_00409758(local_38,"HOUR");
                    if (iVar3 != 0) {
                      local_24 = (char *)0x478417;
                      FUN_004052a4((int *)&local_3c,(VARIANTARG *)(param_2 + 8));
                      local_24 = (char *)0x478424;
                      iVar3 = FUN_00409758(local_3c,"MINUTE");
                      if (iVar3 != 0) {
                        local_24 = (char *)0x478433;
                        FUN_004052a4((int *)&local_40,(VARIANTARG *)(param_2 + 8));
                        local_24 = (char *)0x478440;
                        iVar3 = FUN_00409758(local_40,"SECOND");
                        if (iVar3 != 0) {
                          local_24 = (char *)0x478468;
                          FUN_004052a4((int *)&local_44,(VARIANTARG *)(param_2 + 8));
                          local_24 = (char *)0x478475;
                          iVar3 = FUN_00409758(local_44,"GETDATE");
                          if (iVar3 == 0) {
                            *(undefined1 *)(param_2 + 0x20) = 0xb;
                            *(undefined1 *)(param_2 + 0x2c) = 2;
                          }
                          else {
                            local_24 = (char *)0x47848e;
                            FUN_004052a4((int *)&local_48,(VARIANTARG *)(param_2 + 8));
                            local_24 = (char *)0x47849b;
                            iVar3 = FUN_00409758(local_48,"DATE");
                            if (iVar3 == 0) {
                              *(undefined1 *)(param_2 + 0x20) = 9;
                              local_24 = (char *)0x4784ad;
                              iVar3 = FUN_00412384(*(undefined4 **)(param_2 + 0x28),0);
                              *(undefined1 *)(param_2 + 0x2c) = *(undefined1 *)(iVar3 + 0x2c);
                            }
                            else {
                              local_24 = (char *)0x4784c0;
                              FUN_004052a4((int *)&local_4c,(VARIANTARG *)(param_2 + 8));
                              local_24 = (char *)0x4784cd;
                              iVar3 = FUN_00409758(local_4c,"TIME");
                              if (iVar3 == 0) {
                                *(undefined1 *)(param_2 + 0x20) = 10;
                                local_24 = (char *)0x4784df;
                                iVar3 = FUN_00412384(*(undefined4 **)(param_2 + 0x28),0);
                                *(undefined1 *)(param_2 + 0x2c) = *(undefined1 *)(iVar3 + 0x2c);
                              }
                            }
                          }
                          goto LAB_004784e5;
                        }
                      }
                    }
                  }
                }
              }
              *(undefined1 *)(param_2 + 0x20) = 3;
              local_24 = (char *)0x478452;
              iVar3 = FUN_00412384(*(undefined4 **)(param_2 + 0x28),0);
              *(undefined1 *)(param_2 + 0x2c) = *(undefined1 *)(iVar3 + 0x2c);
              goto LAB_004784e5;
            }
          }
          *(undefined1 *)(param_2 + 0x20) = 3;
          *(undefined1 *)(param_2 + 0x2c) = 1;
          goto LAB_004784e5;
        }
      }
      local_24 = (char *)0x478344;
      iVar3 = FUN_00412384(*(undefined4 **)(param_2 + 0x28),0);
      *(undefined1 *)(param_2 + 0x20) = *(undefined1 *)(iVar3 + 0x20);
      *(undefined1 *)(param_2 + 0x2c) = 1;
      goto LAB_004784e5;
    }
  }
  *(undefined1 *)(param_2 + 0x20) = 6;
  *(undefined1 *)(param_2 + 0x2c) = 1;
LAB_004784e5:
  *in_FS_OFFSET = local_20;
  local_18 = &LAB_00478507;
  local_1c = (char *)0x4784ff;
  FUN_00403dd4((int *)&local_4c,0x12);
  return;
}

