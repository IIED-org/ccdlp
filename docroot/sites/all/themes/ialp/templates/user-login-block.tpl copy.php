<div id="user-login-block-container">
  <div id="user-login-block-form-fields">
  <!-->  <?php print $name; // Display username field ?>
    <?php print $pass; // Display Password field ?>
  -->
  <div class="form-item">
   <label for="edit-name">Username<span class="form-required" title="This field is required.">*</span></label>
   <input type="text" maxlength="60" name="name" id="edit-name"  size="30" value="" tabindex="1" class="form-text required" />
   <div class="description">Enter your username or email address</div>
  </div>
  <div class="form-item">
   <label for="edit-pass">Password<span class="form-required" title="This field is required.">*</span></label>
   <input type="password" name="pass" id="edit-pass"  size="40"  tabindex="2" class="form-text required" />
   <div class="description">Enter your password</div>
  </div>
  
    <?php print $submit; // Display submit button ?>
    <?php print $links; // Display submit button ?>
    <?php print $rendered; // Display hidden elements (required for successful login) ?> 
  </div>
</div>