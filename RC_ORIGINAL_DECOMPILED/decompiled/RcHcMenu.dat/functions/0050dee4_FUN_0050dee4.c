/*
 * FUN_0050dee4 at 0050dee4
 * undefined __register FUN_0050dee4(int * param_1)
 * Address ranges: 0050dee4-0050e0fc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0050dee4(int *param_1)

{
  char cVar1;
  RECT local_3c;
  RECT local_2c;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  int *local_8;
  
  local_8 = param_1;
  if ((char)param_1[0x4e] == '\0') {
    cVar1 = (**(code **)(*param_1 + 0x4c))();
    if (cVar1 == '\0') {
      FUN_0041c318(*(int **)(local_8[0x81] + 0x14),*(undefined4 *)(local_8[0x80] + 8));
    }
    else if (*(char *)((int)local_8 + 0x20b) == '\x02') {
      FUN_0041c318(*(int **)(local_8[0x81] + 0x14),*(undefined4 *)(local_8[0x80] + 0x1c));
    }
    else {
      FUN_0041c318(*(int **)(local_8[0x81] + 0x14),local_8[0x83]);
    }
    FUN_0050e248(local_8,(uint *)&local_3c);
    FUN_0041c9f8((int *)local_8[0x81],&local_3c);
    local_c = FUN_0041c310(*(int *)(local_8[0x81] + 0x14));
    FUN_0041c318(*(int **)(local_8[0x81] + 0x14),*(undefined4 *)(local_8[0x80] + 0x18));
    FUN_0050e248(local_8,(uint *)&local_3c);
    FUN_0041ca34((int *)local_8[0x81],&local_3c);
    if (*(char *)((int)local_8 + 0x20b) != '\0') {
      FUN_0050e4dc(local_8);
    }
    FUN_0041c318(*(int **)(local_8[0x81] + 0x14),local_c);
  }
  else {
    FUN_0050e248(param_1,(uint *)&local_2c);
    local_1c = *(undefined4 *)(local_8[0x80] + 0x10);
    local_18 = *(undefined4 *)(local_8[0x80] + 0xc);
    local_14 = *(undefined4 *)(local_8[0x80] + 0x14);
    local_10 = *(undefined4 *)(local_8[0x80] + 0x18);
    cVar1 = (**(code **)(*local_8 + 0x4c))();
    if (cVar1 == '\0') {
      FUN_0041c318(*(int **)(local_8[0x81] + 0x14),*(undefined4 *)(local_8[0x80] + 8));
    }
    else if (*(char *)((int)local_8 + 0x20b) == '\x02') {
      FUN_0041c318(*(int **)(local_8[0x81] + 0x14),*(undefined4 *)(local_8[0x80] + 0x1c));
    }
    else {
      FUN_0041c318(*(int **)(local_8[0x81] + 0x14),local_8[0x83]);
    }
    FUN_0041c9f8((int *)local_8[0x81],&local_2c);
    FUN_004ab5ec((int *)local_8[0x81],&local_2c.left,(int)&local_1c,0);
    if (*(char *)((int)local_8 + 0x20b) != '\0') {
      FUN_0050e4dc(local_8);
    }
  }
  return;
}

